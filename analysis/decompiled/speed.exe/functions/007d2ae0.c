/* speed.exe 007d2ae0 _CrtMessageWindow; analysis pseudocode, not buildable source.
 * calls 007ca340 __exit
 * calls 007d2310 __CrtDbgBreak
 * calls 007c64e0 _strncpy
 * calls 007d6cb0 __security_check_cookie
 * calls 007de140 ___crtMessageBoxA
 * calls 007dcef0 _raise
 * calls 007d0bd0 FUN_007d0bd0
 * calls 007df440 __snprintf
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:0000005d GetModuleFileNameA
 * calls 007d2670 __CrtDbgReport
 * calls 007d0cd0 _strlen
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _CrtMessageWindow
   
   Library: Visual Studio 2003 Debug */

bool _CrtMessageWindow(int param_1,undefined1 *param_2,undefined1 *param_3,char *param_4,
                      char *param_5)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  char *local_1148;
  char *local_1144;
  char *local_1140;
  undefined1 *local_113c;
  char *local_1138;
  undefined1 *local_1134;
  undefined1 *local_1130;
  char *local_112c;
  char *local_1128;
  char *local_1124;
  CHAR local_111c [260];
  undefined1 local_1018;
  char local_1014 [4100];
  undefined4 local_10;
  char *local_c;
  char *local_8;
  
  local_8 = (char *)0x7d2aed;
  local_10 = DAT_00906980;
  if ((param_5 == (char *)0x0) &&
     (iVar1 = __CrtDbgReport(2,"dbgrpt.c",0x23a,0,"szUserMessage != NULL"), iVar1 == 1)) {
    __CrtDbgBreak();
  }
  local_1018 = 0;
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_111c,0x104);
  if (DVar2 == 0) {
    FUN_007d0bd0(local_111c,"<program name unknown>");
  }
  local_c = local_111c;
  sVar3 = _strlen(local_c);
  if (0x40 < sVar3) {
    sVar3 = _strlen(local_c);
    local_c = local_c + (sVar3 - 0x40);
    _strncpy(local_c,"...",3);
  }
  local_8 = param_4;
  if ((param_4 != (char *)0x0) && (sVar3 = _strlen(param_4), 0x40 < sVar3)) {
    sVar3 = _strlen(local_8);
    local_8 = local_8 + (sVar3 - 0x40);
    _strncpy(local_8,"...",3);
  }
  if (param_1 == 2) {
    local_1124 = 
    "\n\nFor information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts."
    ;
  }
  else {
    local_1124 = "";
  }
  if (*param_5 == '\0') {
    local_1128 = "";
  }
  else {
    local_1128 = param_5;
  }
  if ((*param_5 == '\0') || (param_1 != 2)) {
    local_112c = "";
  }
  else {
    local_112c = "Expression: ";
  }
  if (*param_5 == '\0') {
    local_1130 = &DAT_00890978;
  }
  else {
    local_1130 = &DAT_008b9150;
  }
  if (param_3 == (undefined1 *)0x0) {
    local_1134 = &DAT_00890978;
    local_1138 = "";
    param_3 = local_1134;
  }
  else {
    local_1138 = "\nLine: ";
  }
  if (param_2 == (undefined1 *)0x0) {
    local_113c = &DAT_00890978;
    local_1140 = "";
    param_2 = local_113c;
  }
  else {
    local_1140 = "\nFile: ";
  }
  if (local_8 == (char *)0x0) {
    local_1144 = "";
    local_1148 = "";
  }
  else {
    local_1148 = "\nModule: ";
    local_1144 = local_8;
  }
  iVar1 = __snprintf(local_1014,0x1000,
                     "Debug %s!\n\nProgram: %s%s%s%s%s%s%s%s%s%s%s\n\n(Press Retry to debug the application)"
                     ,(&PTR_s_Warning_00906ad4)[param_1],local_c,local_1148,local_1144,local_1140,
                     param_2,local_1138,param_3,local_1130,local_112c,local_1128,local_1124);
  if (iVar1 < 0) {
    FUN_007d0bd0(local_1014,"_CrtDbgReport: String too long or IO Error");
  }
  iVar1 = ___crtMessageBoxA(local_1014,"Microsoft Visual C++ Debug Library",0x12012);
  if (iVar1 == 3) {
    _raise(0x16);
    __exit(3);
  }
  return iVar1 == 4;
}

