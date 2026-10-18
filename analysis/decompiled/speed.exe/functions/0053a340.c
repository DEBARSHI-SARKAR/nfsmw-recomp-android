/* speed.exe 0053a340 FUN_0053a340; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 */

void FUN_0053a340(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == param_1 + 1) {
    local_20 = DAT_0089deb8;
    local_1c = DAT_0089debc;
    local_18 = DAT_0089dec0;
    local_14 = DAT_0089dec4;
    param_1 = (char *)&local_20;
  }
  pcVar2 = 
  "%%{ CMD=http\nTIME=%d\nMESG=0x%x\nURL-GET=%s\nSUCCESS-GOTO=$http\nBTN1-GOTO=$exit=-1\n%%}\n%%{FAILURE CMD=alrt\nTITLE=0x%x\nMESG=0x%x\nBTN1=0x%x\nBTN1-GOTO=$exit=%d\n%%}"
  ;
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  if ((int)(pcVar3 + -0x89ddf4) < 0x200) {
    FUN_004647c0(&DAT_009b3ea0,
                 "%%{ CMD=http\nTIME=%d\nMESG=0x%x\nURL-GET=%s\nSUCCESS-GOTO=$http\nBTN1-GOTO=$exit=-1\n%%}\n%%{FAILURE CMD=alrt\nTITLE=0x%x\nMESG=0x%x\nBTN1=0x%x\nBTN1-GOTO=$exit=%d\n%%}"
                 ,0x1e,param_2,param_1,param_3,param_4,param_5,0xffffffff);
  }
  return;
}

