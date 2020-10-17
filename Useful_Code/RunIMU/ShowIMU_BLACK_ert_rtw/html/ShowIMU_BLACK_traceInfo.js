function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ShowIMU_BLACK"};
	this.sidHashMap["ShowIMU_BLACK"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/LSM9DS1 IMU Sensor"] = {sid: "ShowIMU_BLACK:49"};
	this.sidHashMap["ShowIMU_BLACK:49"] = {rtwname: "<Root>/LSM9DS1 IMU Sensor"};
	this.rtwnameHashMap["<Root>/Mux"] = {sid: "ShowIMU_BLACK:52"};
	this.sidHashMap["ShowIMU_BLACK:52"] = {rtwname: "<Root>/Mux"};
	this.rtwnameHashMap["<Root>/UDP Send"] = {sid: "ShowIMU_BLACK:51"};
	this.sidHashMap["ShowIMU_BLACK:51"] = {rtwname: "<Root>/UDP Send"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
