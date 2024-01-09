-- check if go and cpp folders exist
local go_dir, _ = pcall(Yab.fileinfo, "go")
if not go_dir then
	print("Creating go folder")
	os.execute("mkdir go")
end
local cpp_dir, _ = pcall(Yab.fileinfo, "cpp")
if not cpp_dir then
    print("Creating cpp folder")
    os.execute("mkdir cpp")
end

-- remove old generated files (go, cc, h)
local old_files = Yab.find(".", "**.pb.go")
for _, old_file in ipairs(old_files) do
	print("Removing old file: " .. old_file)
	os.remove(old_file)
end
old_files = Yab.find(".", "**.pb.cc")
for _, old_file in ipairs(old_files) do
	print("Removing old file: " .. old_file)
	os.remove(old_file)
end
old_files = Yab.find(".", "**.pb.h")
for _, old_file in ipairs(old_files) do
	print("Removing old file: " .. old_file)
	os.remove(old_file)
end

-- compile proto files
local proto_files = Yab.find(".", "**.proto")
for _, proto_file in ipairs(proto_files) do
	print("Compiling proto file: " .. proto_file)
	os.execute("protoc --go_out=go --go_opt=paths=source_relative " .. proto_file)
	os.execute("protoc --cpp_out=cpp " .. proto_file)
end
