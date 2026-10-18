/* speed.exe 006e62a0 FUN_006e62a0; analysis pseudocode, not buildable source.
 * calls 006e1e90 FUN_006e1e90
 * calls 006e5bb0 FUN_006e5bb0
 */

void FUN_006e62a0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = DAT_008fbea0;
  uVar2 = DAT_008fbe9c;
  pcVar1 = DAT_008fbe14;
  if ((DAT_008fbe14 == (code *)0x0) && (DAT_008fbe18 == 0)) {
    FUN_006e5bb0(param_1,param_2);
    return;
  }
  FUN_006e1e90(&param_1,&param_2);
  (*pcVar1)(uVar2,uVar3,local_20,(int)local_20 >> 0x1f);
  return;
}

