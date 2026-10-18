/* speed.exe 0054e560 FUN_0054e560; analysis pseudocode, not buildable source.
 * calls 005a5790 FUN_005a5790
 * calls 00460c70 FUN_00460c70
 * calls 005926b0 FUN_005926b0
 * calls 00586ca0 FUN_00586ca0
 * calls 005868e0 FUN_005868e0
 * calls 0051dcf0 FUN_0051dcf0
 * calls 00586950 FUN_00586950
 * calls 00652ad0 _malloc
 * calls 0054e490 FUN_0054e490
 * calls 00586760 FUN_00586760
 * calls 00586d90 FUN_00586d90
 * calls 00586d40 FUN_00586d40
 * calls 005a8d10 FUN_005a8d10
 */

void __fastcall FUN_0054e560(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_44;
  undefined1 local_40;
  undefined4 local_3f;
  
  local_40 = 0;
  puVar3 = &local_3f;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  if (*(int *)(param_1 + 0x8fc) != 0) {
    uVar2 = FUN_00586d90();
    FUN_00460c70(&local_40,uVar2);
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_00586760(0x7ab5521a);
    }
  }
  FUN_00586d40();
  puVar3 = *(undefined4 **)(param_1 + 0x8f0);
  local_44 = 0;
  for (; puVar3 != (undefined4 *)(param_1 + 0x8f0); puVar3 = (undefined4 *)*puVar3) {
    iVar4 = FUN_00586950(puVar3 + 2);
    if (iVar4 == 0) {
      FUN_0054e490(puVar3);
      local_44 = local_44 + 1;
    }
  }
  if (local_44 < 0xf) {
    iVar4 = 0xf - local_44;
    do {
      puVar3 = _malloc(0x1c);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar1 = puVar3 + 3;
        *puVar1 = puVar1;
        puVar3[4] = puVar1;
        *(undefined1 *)(puVar3 + 5) = 1;
        *puVar3 = &PTR_FUN_0089e3a4;
      }
      FUN_0051dcf0(&DAT_00890978,0);
      FUN_0051dcf0(&DAT_00890978,0);
      FUN_005868e0(puVar3);
      FUN_005a5790(puVar3);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_44 == 0) {
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_00586760(0x7ab5521a);
      FUN_005926b0(1);
      return;
    }
  }
  else {
    iVar4 = FUN_00586950(&local_40);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_00586ca0(iVar4);
      iVar4 = iVar4 + -1;
    }
    FUN_005a8d10(iVar4);
    if (*(int *)(param_1 + 0x58) != 0) {
      FUN_00586760(0x249db7b7);
    }
  }
  FUN_005926b0(1);
  return;
}

