/* speed.exe 00666390 FUN_00666390; analysis pseudocode, not buildable source.
 * calls 0065f210 FUN_0065f210
 * calls 00665c00 FUN_00665c00
 */

void FUN_00666390(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = DAT_008fbd1c;
  uVar2 = DAT_008fbd18;
  pcVar1 = DAT_008fbc90;
  if ((DAT_008fbc90 == (code *)0x0) && (DAT_008fbc94 == 0)) {
    FUN_00665c00(param_1,param_2);
    return;
  }
  FUN_0065f210(&param_1,&param_2);
  (*pcVar1)(uVar2,uVar3,local_20,(int)local_20 >> 0x1f);
  return;
}

