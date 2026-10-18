/* speed.exe 0079aa50 FUN_0079aa50; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0079f090 FUN_0079f090
 * calls 0079a9e0 FUN_0079a9e0
 * calls 00794f80 FUN_00794f80
 * calls 00795610 FUN_00795610
 * calls 00845290 FUN_00845290
 * calls 0056e340 FUN_0056e340
 * calls 0078fbc0 FUN_0078fbc0
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0078c500 FUN_0078c500
 * calls 0079a5c0 FUN_0079a5c0
 * calls 00460d20 FUN_00460d20
 * calls 007ec1bd FUN_007ec1bd
 * calls 0079a220 FUN_0079a220
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_0079aa50(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar4 = (undefined4 *)(param_3 + 8);
    FUN_00845290(puVar4,*(undefined4 *)(param_2 + 0x10));
    uVar1 = FUN_0056e340();
    iVar2 = FUN_00460d20(param_3 + 0x40,uVar1);
    uVar1 = 3;
    if (iVar2 == 0) {
      DAT_009b416c = 1;
      uVar5 = *puVar4;
      FUN_0079f090(uVar5,3);
      FUN_0079a220(uVar5,uVar1);
    }
    else {
      iVar2 = param_3 + 0x54;
      DAT_009b416c = 0;
      uVar5 = *puVar4;
      iVar3 = param_3 + 0x21c;
      FUN_0079f090(iVar3,uVar5,iVar2);
      FUN_0079a5c0(iVar3,uVar5,iVar2,uVar1);
      iVar2 = 1;
      if (1 < *(int *)(param_3 + 0x214)) {
        iVar3 = param_3 + 0x2a8;
        do {
          FUN_0079f090();
          FUN_007ec1bd();
          InterlockedIncrement((LONG *)&DAT_009b42d4);
          FUN_0078c500(iVar3);
          InterlockedDecrement((LONG *)&DAT_009b42d4);
          FUN_007ec1c8();
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x8c;
        } while (iVar2 < *(int *)(param_3 + 0x214));
      }
      FUN_0079a9e0();
      FUN_00795610();
    }
  }
  iVar3 = FUN_00794f80();
  iVar2 = *(int *)(iVar3 + 0x40);
  if (iVar2 != 0) {
    if (*(code **)(iVar2 + 0x18) != (code *)0x0) {
      (**(code **)(iVar2 + 0x18))(param_2,*(undefined4 *)(iVar2 + 0x1c));
    }
    iVar2 = *(int *)(iVar3 + 0x40);
    if (iVar2 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar2);
    }
    *(undefined4 *)(iVar3 + 0x40) = 0;
  }
  return;
}

