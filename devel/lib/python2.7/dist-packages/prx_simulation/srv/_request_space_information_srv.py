"""autogenerated by genpy from prx_simulation/request_space_information_srvRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class request_space_information_srvRequest(genpy.Message):
  _md5sum = "f9879e03841c1343ded10f716e0d43ab"
  _type = "prx_simulation/request_space_information_srvRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string consumer_pathname


"""
  __slots__ = ['consumer_pathname']
  _slot_types = ['string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       consumer_pathname

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(request_space_information_srvRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.consumer_pathname is None:
        self.consumer_pathname = ''
    else:
      self.consumer_pathname = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.consumer_pathname
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.consumer_pathname = str[start:end].decode('utf-8')
      else:
        self.consumer_pathname = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.consumer_pathname
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.consumer_pathname = str[start:end].decode('utf-8')
      else:
        self.consumer_pathname = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
"""autogenerated by genpy from prx_simulation/request_space_information_srvResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import prx_simulation.msg

class request_space_information_srvResponse(genpy.Message):
  _md5sum = "04a1df5caba38948c1ec4353cea80064"
  _type = "prx_simulation/request_space_information_srvResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
interval_msg[] state_space_intervals
interval_msg[] control_space_intervals


================================================================================
MSG: prx_simulation/interval_msg
float64 lower
float64 upper
string pathname
"""
  __slots__ = ['state_space_intervals','control_space_intervals']
  _slot_types = ['prx_simulation/interval_msg[]','prx_simulation/interval_msg[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       state_space_intervals,control_space_intervals

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(request_space_information_srvResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.state_space_intervals is None:
        self.state_space_intervals = []
      if self.control_space_intervals is None:
        self.control_space_intervals = []
    else:
      self.state_space_intervals = []
      self.control_space_intervals = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.state_space_intervals)
      buff.write(_struct_I.pack(length))
      for val1 in self.state_space_intervals:
        _x = val1
        buff.write(_struct_2d.pack(_x.lower, _x.upper))
        _x = val1.pathname
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.control_space_intervals)
      buff.write(_struct_I.pack(length))
      for val1 in self.control_space_intervals:
        _x = val1
        buff.write(_struct_2d.pack(_x.lower, _x.upper))
        _x = val1.pathname
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.state_space_intervals is None:
        self.state_space_intervals = None
      if self.control_space_intervals is None:
        self.control_space_intervals = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.state_space_intervals = []
      for i in range(0, length):
        val1 = prx_simulation.msg.interval_msg()
        _x = val1
        start = end
        end += 16
        (_x.lower, _x.upper,) = _struct_2d.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.pathname = str[start:end].decode('utf-8')
        else:
          val1.pathname = str[start:end]
        self.state_space_intervals.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.control_space_intervals = []
      for i in range(0, length):
        val1 = prx_simulation.msg.interval_msg()
        _x = val1
        start = end
        end += 16
        (_x.lower, _x.upper,) = _struct_2d.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.pathname = str[start:end].decode('utf-8')
        else:
          val1.pathname = str[start:end]
        self.control_space_intervals.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.state_space_intervals)
      buff.write(_struct_I.pack(length))
      for val1 in self.state_space_intervals:
        _x = val1
        buff.write(_struct_2d.pack(_x.lower, _x.upper))
        _x = val1.pathname
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.control_space_intervals)
      buff.write(_struct_I.pack(length))
      for val1 in self.control_space_intervals:
        _x = val1
        buff.write(_struct_2d.pack(_x.lower, _x.upper))
        _x = val1.pathname
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        if python3:
          buff.write(struct.pack('<I%sB'%length, length, *_x))
        else:
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.state_space_intervals is None:
        self.state_space_intervals = None
      if self.control_space_intervals is None:
        self.control_space_intervals = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.state_space_intervals = []
      for i in range(0, length):
        val1 = prx_simulation.msg.interval_msg()
        _x = val1
        start = end
        end += 16
        (_x.lower, _x.upper,) = _struct_2d.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.pathname = str[start:end].decode('utf-8')
        else:
          val1.pathname = str[start:end]
        self.state_space_intervals.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.control_space_intervals = []
      for i in range(0, length):
        val1 = prx_simulation.msg.interval_msg()
        _x = val1
        start = end
        end += 16
        (_x.lower, _x.upper,) = _struct_2d.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.pathname = str[start:end].decode('utf-8')
        else:
          val1.pathname = str[start:end]
        self.control_space_intervals.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2d = struct.Struct("<2d")
class request_space_information_srv(object):
  _type          = 'prx_simulation/request_space_information_srv'
  _md5sum = '34ab1b4f7fee73bcfc9b3f4de4f117fa'
  _request_class  = request_space_information_srvRequest
  _response_class = request_space_information_srvResponse