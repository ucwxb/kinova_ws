// Auto-generated. Do not edit!

// (in-package kortex_driver.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ActuatorInformation {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.count = null;
    }
    else {
      if (initObj.hasOwnProperty('count')) {
        this.count = initObj.count
      }
      else {
        this.count = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ActuatorInformation
    // Serialize message field [count]
    bufferOffset = _serializer.uint32(obj.count, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ActuatorInformation
    let len;
    let data = new ActuatorInformation(null);
    // Deserialize message field [count]
    data.count = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'kortex_driver/ActuatorInformation';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ac8b22eb02c1f433e0a55ee9aac59a18';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    uint32 count
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ActuatorInformation(null);
    if (msg.count !== undefined) {
      resolved.count = msg.count;
    }
    else {
      resolved.count = 0
    }

    return resolved;
    }
};

module.exports = ActuatorInformation;
