/* speed.exe 005a3950 FUN_005a3950; analysis pseudocode, not buildable source.
 * calls 00600ab0 FUN_00600ab0
 * calls 00516e30 FUN_00516e30
 * calls 004519d0 FUN_004519d0
 * calls 005dd240 FUN_005dd240
 * calls 005e39e0 FUN_005e39e0
 * calls 006596e0 FUN_006596e0
 * calls 005fb710 FUN_005fb710
 * calls 00516e10 FUN_00516e10
 * calls 00460f50 FUN_00460f50
 * calls 0057f4d0 FUN_0057f4d0
 * calls 00599d20 FUN_00599d20
 * calls 004647e0 FUN_004647e0
 * calls 006530a0 FUN_006530a0
 * calls 00603440 FUN_00603440
 * calls 005af1c0 FUN_005af1c0
 * calls 0045da30 FUN_0045da30
 * calls 0057fb50 FUN_0057fb50
 * calls 00576c50 FUN_00576c50
 * calls 00666fe0 FUN_00666fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a3950(undefined4 *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_0057f4d0();
  uVar2 = FUN_0057fb50();
  *param_1 = uVar2;
  iVar3 = FUN_0045da30(0x19b3);
  FUN_004647e0(param_1 + 0x9b,0xd,"MW-%d-%.4sXXX",iVar3 + 0x42d,*(undefined4 *)(DAT_0091cf90 + 0x10)
              );
  FUN_00460f50(param_1 + 0x9b);
  param_1[1] = param_1[1] | 1;
  if ((DAT_00926125 != '\0') && (DAT_00926126 != '\0')) {
    *(undefined1 *)(param_1 + 2) = 0xf;
    FUN_005dd240();
    puVar4 = (undefined4 *)FUN_00599d20(0x2cf385b2);
    *param_1 = *puVar4;
    puVar4 = (undefined4 *)FUN_00599d20(0x3a94520);
    *param_1 = *puVar4;
  }
  if (((uint)param_1[1] >> 0x11 & 1) == 0) {
    cVar1 = FUN_006530a0(5);
    if (cVar1 != '\0') {
      FUN_00576c50(2,0);
      param_1[1] = param_1[1] | 0x20000;
    }
  }
  if (param_2 != '\0') {
    *(undefined4 *)(DAT_0091cf90 + 300) = 0;
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 1;
    if (DAT_00926126 == '\0') {
      uVar2 = FUN_005af1c0("M3GTRCAREERSTART");
      *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8) = uVar2;
      *(undefined4 *)(DAT_0091cf90 + 0x2c + *(int *)(DAT_0091cf90 + 0x18) * 0x18) = uVar2;
      DAT_0091cbac = 0;
      DAT_0091cbb8 = 0;
      DAT_0091cbb4 = 0;
      DAT_0091cbb0 = 0;
      DAT_0091cbbc = 0;
      DAT_0091cbc0 = 0;
      DAT_0091cbc4 = 0;
      _DAT_0091cbd0 = 0;
      _DAT_0091cbd4 = 0;
      DAT_0091cbdc = 0;
      DAT_0091cbc8 = 0;
      DAT_0091cbcc = 0;
      uVar2 = FUN_004519d0("16.1.0");
      uVar2 = FUN_005fb710(uVar2);
      uVar2 = FUN_00603440(uVar2);
      FUN_00600ab0(uVar2,2);
      FUN_005e39e0(uVar2);
      if (DAT_00925e90 == 3) {
        FUN_006596e0();
        return;
      }
      FUN_00666fe0();
    }
    else {
      uVar2 = 2;
      FUN_00516e10(2);
      FUN_00516e30(uVar2);
      *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xfffffeff;
      if (DAT_00926125 != '\0') {
        *(undefined1 *)(param_1 + 2) = 0xf;
        return;
      }
    }
  }
  return;
}

