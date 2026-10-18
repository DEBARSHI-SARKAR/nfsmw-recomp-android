/* speed.exe 006f5c40 FUN_006f5c40; analysis pseudocode, not buildable source.
 * calls 006f5ba0 FUN_006f5ba0
 * calls 006ef960 FUN_006ef960
 */

void __fastcall FUN_006f5c40(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  FUN_006f5ba0();
  puVar5 = (undefined4 *)param_1[0x15];
  if (puVar5 != (undefined4 *)(param_1[0x15] + param_1[0x17] * 8)) {
    do {
      if (puVar5[1] != 0) {
        if ((uint)param_1[2] <= (uint)param_1[3]) {
          uVar2 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
          FUN_006ef960(uVar2);
        }
        puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *puVar5;
          puVar1[1] = puVar5[1];
        }
        param_1[3] = param_1[3] + 1;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != (undefined4 *)(param_1[0x15] + param_1[0x17] * 8));
  }
  iVar3 = param_1[0x17];
  iVar4 = iVar3;
  if (0 < iVar3) {
    do {
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_1[0x17] = iVar4;
  }
  if (param_1[0x15] != 0) {
    (**(code **)(param_1[0x14] + 8))(param_1[0x15],param_1[0x16]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  FUN_006f5ba0();
  return;
}

