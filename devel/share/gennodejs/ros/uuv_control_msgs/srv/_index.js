
"use strict";

let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let GetPIDParams = require('./GetPIDParams.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let SwitchToManual = require('./SwitchToManual.js')
let InitRectTrajectory = require('./InitRectTrajectory.js')
let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')
let SetSMControllerParams = require('./SetSMControllerParams.js')
let GetWaypoints = require('./GetWaypoints.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let AddWaypoint = require('./AddWaypoint.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let StartTrajectory = require('./StartTrajectory.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')
let ResetController = require('./ResetController.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let GoToIncremental = require('./GoToIncremental.js')
let SetPIDParams = require('./SetPIDParams.js')
let GoTo = require('./GoTo.js')
let Hold = require('./Hold.js')

module.exports = {
  SetMBSMControllerParams: SetMBSMControllerParams,
  GetPIDParams: GetPIDParams,
  ClearWaypoints: ClearWaypoints,
  SwitchToManual: SwitchToManual,
  InitRectTrajectory: InitRectTrajectory,
  IsRunningTrajectory: IsRunningTrajectory,
  InitCircularTrajectory: InitCircularTrajectory,
  SetSMControllerParams: SetSMControllerParams,
  GetWaypoints: GetWaypoints,
  InitWaypointsFromFile: InitWaypointsFromFile,
  SwitchToAutomatic: SwitchToAutomatic,
  AddWaypoint: AddWaypoint,
  InitWaypointSet: InitWaypointSet,
  StartTrajectory: StartTrajectory,
  GetSMControllerParams: GetSMControllerParams,
  InitHelicalTrajectory: InitHelicalTrajectory,
  ResetController: ResetController,
  GetMBSMControllerParams: GetMBSMControllerParams,
  GoToIncremental: GoToIncremental,
  SetPIDParams: SetPIDParams,
  GoTo: GoTo,
  Hold: Hold,
};
