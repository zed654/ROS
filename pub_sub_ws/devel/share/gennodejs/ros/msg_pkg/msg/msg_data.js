// Auto-generated. Do not edit!

// (in-package msg_pkg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class msg_data {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.data1 = null;
      this.data2 = null;
    }
    else {
      if (initObj.hasOwnProperty('data1')) {
        this.data1 = initObj.data1
      }
      else {
        this.data1 = 0;
      }
      if (initObj.hasOwnProperty('data2')) {
        this.data2 = initObj.data2
      }
      else {
        this.data2 = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type msg_data
    // Serialize message field [data1]
    bufferOffset = _serializer.int32(obj.data1, buffer, bufferOffset);
    // Serialize message field [data2]
    bufferOffset = _serializer.int32(obj.data2, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type msg_data
    let len;
    let data = new msg_data(null);
    // Deserialize message field [data1]
    data.data1 = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [data2]
    data.data2 = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'msg_pkg/msg_data';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '974ada69e2d7501b3274b7b8e93825bd';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 data1
    int32 data2
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new msg_data(null);
    if (msg.data1 !== undefined) {
      resolved.data1 = msg.data1;
    }
    else {
      resolved.data1 = 0
    }

    if (msg.data2 !== undefined) {
      resolved.data2 = msg.data2;
    }
    else {
      resolved.data2 = 0
    }

    return resolved;
    }
};

module.exports = msg_data;
