/* speed.exe 006e6150 FUN_006e6150; analysis pseudocode, not buildable source.
 * calls 006e1c80 FUN_006e1c80
 * calls 006e58d0 FUN_006e58d0
 */

void FUN_006e6150(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = DAT_008fb890;
  uVar2 = DAT_008fb88c;
  pcVar1 = DAT_008fb804;
  if ((DAT_008fb804 == (code *)0x0) && (DAT_008fb808 == 0)) {
    FUN_006e58d0(param_1,param_2);
    return;
  }
  FUN_006e1c80(&param_1,&param_2);
  (*pcVar1)(uVar2,uVar3,local_20,(int)local_20 >> 0x1f);
  return;
}

