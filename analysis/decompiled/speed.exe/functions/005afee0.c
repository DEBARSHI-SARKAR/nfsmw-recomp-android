/* speed.exe 005afee0 FUN_005afee0; analysis pseudocode, not buildable source.
 * calls 005afe00 FUN_005afe00
 */

void FUN_005afee0(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  do {
    cVar3 = FUN_005afe00(param_1,param_2,param_3,param_4);
    iVar4 = 0;
    sVar1 = *param_1;
    while ((sVar1 < 0x20 && (sVar1 != 0))) {
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      sVar1 = param_1[iVar2];
    }
  } while ((param_1[iVar4] == 0) && (cVar3 == '\x01'));
  return;
}

