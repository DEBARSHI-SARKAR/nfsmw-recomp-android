/* speed.exe 005ac760 FUN_005ac760; analysis pseudocode, not buildable source.
 * calls 005ac510 FUN_005ac510
 * calls 0059c790 FUN_0059c790
 */

void FUN_005ac760(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  uVar3 = DAT_008fbb98;
  uVar2 = DAT_008fbb94;
  pcVar1 = DAT_008fbb0c;
  if ((DAT_008fbb0c == (code *)0x0) && (DAT_008fbb10 == 0)) {
    FUN_005ac510(param_1,param_2);
    return;
  }
  FUN_0059c790(&param_1,&param_2);
  (*pcVar1)(uVar2,uVar3,local_20,(int)local_20 >> 0x1f);
  return;
}

