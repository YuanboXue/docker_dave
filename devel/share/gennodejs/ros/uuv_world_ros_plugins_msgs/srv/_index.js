
"use strict";

let GetCurrentModel = require('./GetCurrentModel.js')
let SetCurrentModel = require('./SetCurrentModel.js')
let SetCurrentDirection = require('./SetCurrentDirection.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')
let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')

module.exports = {
  GetCurrentModel: GetCurrentModel,
  SetCurrentModel: SetCurrentModel,
  SetCurrentDirection: SetCurrentDirection,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
  TransformToSphericalCoord: TransformToSphericalCoord,
  SetCurrentVelocity: SetCurrentVelocity,
  GetOriginSphericalCoord: GetOriginSphericalCoord,
};
