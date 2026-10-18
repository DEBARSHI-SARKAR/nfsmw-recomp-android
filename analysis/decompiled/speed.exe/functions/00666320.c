/* speed.exe 00666320 FUN_00666320; analysis pseudocode, not buildable source.
 * calls 0065f160 FUN_0065f160
 * calls 00665b10 FUN_00665b10
 */

void FUN_00666320(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = DAT_008fba14;
  uVar2 = DAT_008fba10;
  pcVar1 = DAT_008fb988;
  if ((DAT_008fb988 == (code *)0x0) && (DAT_008fb98c == 0)) {
    FUN_00665b10(param_1,param_2);
    return;
  }
  FUN_0065f160(&param_1,&param_2);
  (*pcVar1)(uVar2,uVar3,local_20,(int)local_20 >> 0x1f);
  return;
}

