/* speed.exe 006e6230 FUN_006e6230; analysis pseudocode, not buildable source.
 * calls 006e5ac0 FUN_006e5ac0
 * calls 006e1de0 FUN_006e1de0
 */

void FUN_006e6230(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = DAT_008fc32c;
  uVar2 = DAT_008fc328;
  pcVar1 = DAT_008fc2a0;
  if ((DAT_008fc2a0 == (code *)0x0) && (DAT_008fc2a4 == 0)) {
    FUN_006e5ac0(param_1,param_2);
    return;
  }
  FUN_006e1de0(&param_1,&param_2);
  (*pcVar1)(uVar2,uVar3,local_20,(int)local_20 >> 0x1f);
  return;
}

