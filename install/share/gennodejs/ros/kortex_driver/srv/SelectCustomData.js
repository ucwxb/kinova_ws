// Auto-generated. Do not edit!

// (in-package kortex_driver.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let CustomDataSelection = require('../msg/CustomDataSelection.js');

//-----------------------------------------------------------

let Empty = require('../msg/Empty.js');

//-----------------------------------------------------------

class SelectCustomDataRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.input = null;
    }
    else {
      if (initObj.hasOwnProperty('input')) {
        this.input = initObj.input
      }
      else {
        this.input = new CustomDataSelection();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SelectCustomDataRequest
    // Serialize message field [input]
    bufferOffset = CustomDataSelection.serialize(obj.input, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SelectCustomDataRequest
    let len;
    let data = new SelectCustomDataRequest(null);
    // Deserialize message field [input]
    data.input = CustomDataSelection.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += CustomDataSelection.getMessageSize(object.input);
    return length;
  }

  static datatype() {
    // Returns string type for a service object
    return 'kortex_driver/SelectCustomDataRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3b65878e2123e53e3a3d3d3582effd96';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    CustomDataSelection input
    
    ================================================================================
    MSG: kortex_driver/CustomDataSelection
    
    uint32[] channel
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SelectCustomDataRequest(null);
    if (msg.input !== undefined) {
      resolved.input = CustomDataSelection.Resolve(msg.input)
    }
    else {
      resolved.input = new CustomDataSelection()
    }

    return resolved;
    }
};

class SelectCustomDataResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.output = null;
    }
    else {
      if (initObj.hasOwnProperty('output')) {
        this.output = initObj.output
      }
      else {
        this.output = new Empty();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SelectCustomDataResponse
    // Serialize message field [output]
    bufferOffset = Empty.serialize(obj.output, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SelectCustomDataResponse
    let len;
    let data = new SelectCustomDataResponse(null);
    // Deserialize message field [output]
    data.output = Empty.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'kortex_driver/SelectCustomDataResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c6c43d221c810050f75091660f63b0cd';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Empty output
    
    ================================================================================
    MSG: kortex_driver/Empty
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SelectCustomDataResponse(null);
    if (msg.output !== undefined) {
      resolved.output = Empty.Resolve(msg.output)
    }
    else {
      resolved.output = new Empty()
    }

    return resolved;
    }
};

module.exports = {
  Request: SelectCustomDataRequest,
  Response: SelectCustomDataResponse,
  md5sum() { return '6fbafd6efc00928eb53e0c769fef2624'; },
  datatype() { return 'kortex_driver/SelectCustomData'; }
};
