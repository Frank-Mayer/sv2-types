// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.32.0
// 	protoc        v3.12.4
// source: sensordata.proto

package sv2_types

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// ESP32 attached sensor data
type SensorData struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// value of the sensor
	Value float32 `protobuf:"fixed32,1,opt,name=value,proto3" json:"value,omitempty"`
	// name of the sensor (e.g. "temperature", "humidity", "wind speed")
	Name string `protobuf:"bytes,2,opt,name=name,proto3" json:"name,omitempty"`
	// unit of measurement (e.g. "°C", "ppm", "m/s")
	Unit string `protobuf:"bytes,3,opt,name=unit,proto3" json:"unit,omitempty"`
}

func (x *SensorData) Reset() {
	*x = SensorData{}
	if protoimpl.UnsafeEnabled {
		mi := &file_sensordata_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *SensorData) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*SensorData) ProtoMessage() {}

func (x *SensorData) ProtoReflect() protoreflect.Message {
	mi := &file_sensordata_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use SensorData.ProtoReflect.Descriptor instead.
func (*SensorData) Descriptor() ([]byte, []int) {
	return file_sensordata_proto_rawDescGZIP(), []int{0}
}

func (x *SensorData) GetValue() float32 {
	if x != nil {
		return x.Value
	}
	return 0
}

func (x *SensorData) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *SensorData) GetUnit() string {
	if x != nil {
		return x.Unit
	}
	return ""
}

var File_sensordata_proto protoreflect.FileDescriptor

var file_sensordata_proto_rawDesc = []byte{
	0x0a, 0x10, 0x73, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x64, 0x61, 0x74, 0x61, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x22, 0x4a, 0x0a, 0x0a, 0x53, 0x65, 0x6e, 0x73, 0x6f, 0x72, 0x44, 0x61, 0x74, 0x61,
	0x12, 0x14, 0x0a, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x02, 0x52,
	0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x75, 0x6e,
	0x69, 0x74, 0x18, 0x03, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x75, 0x6e, 0x69, 0x74, 0x42, 0x22,
	0x5a, 0x20, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x46, 0x72, 0x61,
	0x6e, 0x6b, 0x2d, 0x4d, 0x61, 0x79, 0x65, 0x72, 0x2f, 0x73, 0x76, 0x32, 0x2d, 0x74, 0x79, 0x70,
	0x65, 0x73, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_sensordata_proto_rawDescOnce sync.Once
	file_sensordata_proto_rawDescData = file_sensordata_proto_rawDesc
)

func file_sensordata_proto_rawDescGZIP() []byte {
	file_sensordata_proto_rawDescOnce.Do(func() {
		file_sensordata_proto_rawDescData = protoimpl.X.CompressGZIP(file_sensordata_proto_rawDescData)
	})
	return file_sensordata_proto_rawDescData
}

var file_sensordata_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_sensordata_proto_goTypes = []interface{}{
	(*SensorData)(nil), // 0: SensorData
}
var file_sensordata_proto_depIdxs = []int32{
	0, // [0:0] is the sub-list for method output_type
	0, // [0:0] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_sensordata_proto_init() }
func file_sensordata_proto_init() {
	if File_sensordata_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_sensordata_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*SensorData); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_sensordata_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_sensordata_proto_goTypes,
		DependencyIndexes: file_sensordata_proto_depIdxs,
		MessageInfos:      file_sensordata_proto_msgTypes,
	}.Build()
	File_sensordata_proto = out.File
	file_sensordata_proto_rawDesc = nil
	file_sensordata_proto_goTypes = nil
	file_sensordata_proto_depIdxs = nil
}
