/* speed.exe 005f8ea0 FUN_005f8ea0; analysis pseudocode, not buildable source.
 * calls 005ecc30 FUN_005ecc30
 * calls 005f89a0 FUN_005f89a0
 */

void FUN_005f8ea0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = DAT_008fc024;
  uVar2 = DAT_008fc020;
  pcVar1 = DAT_008fbf98;
  if ((DAT_008fbf98 == (code *)0x0) && (DAT_008fbf9c == 0)) {
    FUN_005f89a0(param_1,param_2);
    return;
  }
  FUN_005ecc30(&param_1,&param_2);
  (*pcVar1)(uVar2,uVar3,local_20,(int)local_20 >> 0x1f);
  return;
}

