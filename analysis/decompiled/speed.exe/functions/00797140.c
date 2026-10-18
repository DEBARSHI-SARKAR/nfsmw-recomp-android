/* speed.exe 00797140 FUN_00797140; analysis pseudocode, not buildable source.
 * calls 0083b210 FUN_0083b210
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0083a670 FUN_0083a670
 * calls 00794f80 FUN_00794f80
 * calls 00460d20 FUN_00460d20
 * calls 00845bf0 FUN_00845bf0
 * calls 0078fbc0 FUN_0078fbc0
 */

void FUN_00797140(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_f = 0;
    local_b = 0;
    local_7 = 0;
    local_3 = 0;
    local_10 = 0;
    local_1 = 0;
    uVar2 = FUN_0083a670(*(undefined4 *)(param_2 + 0x10),&DAT_008b6f0c,&local_10,0x10,&DAT_00890978)
    ;
    FUN_0083b210(uVar2);
    for (puVar1 = (undefined4 *)*param_3; puVar1 != param_3; puVar1 = (undefined4 *)*puVar1) {
      iVar3 = FUN_00460d20(puVar1 + 4,&local_10);
      if (iVar3 == 0) {
        FUN_00845bf0(puVar1 + 2,*(undefined4 *)(param_2 + 0x10));
        puVar1[0x93] = 0;
        break;
      }
    }
  }
  iVar4 = FUN_00794f80();
  iVar3 = *(int *)(iVar4 + 0x40);
  if (iVar3 != 0) {
    if (*(code **)(iVar3 + 0x18) != (code *)0x0) {
      (**(code **)(iVar3 + 0x18))(param_2,*(undefined4 *)(iVar3 + 0x1c));
    }
    iVar3 = *(int *)(iVar4 + 0x40);
    if (iVar3 != 0) {
      FUN_0078fbc0();
      thunk_FUN_007c7250(iVar3);
    }
    *(undefined4 *)(iVar4 + 0x40) = 0;
  }
  return;
}

