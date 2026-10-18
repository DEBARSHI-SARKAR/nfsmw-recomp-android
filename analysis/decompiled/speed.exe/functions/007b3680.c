/* speed.exe 007b3680 FUN_007b3680; analysis pseudocode, not buildable source.
 * calls 007a9e10 FUN_007a9e10
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00591e90 FUN_00591e90
 * calls 00516c90 FUN_00516c90
 */

void __fastcall FUN_007b3680(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x18);
    if (*(int **)(param_1 + 0x1ac) == (int *)0x0) {
      if (iVar1 == -1) {
        return;
      }
    }
    else if (**(int **)(param_1 + 0x1ac) == iVar1) {
      return;
    }
    iVar2 = FUN_00591e90("GarageMain.fng");
    if (*(int *)(iVar2 + 0x34) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0x34) + 0x574) = 0;
    }
    if (iVar1 == -1) {
      FUN_00516c90(0x913fa282,0,0);
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      FUN_007a9e10(0);
      *(undefined4 *)(param_1 + 0x1b0) = DAT_00925b14;
      return;
    }
    FUN_00516c90(0xa05a328e,0,0);
    uVar3 = FUN_0056ecc0(iVar1);
    *(undefined4 *)(param_1 + 0x1ac) = uVar3;
    *(undefined4 *)(param_1 + 0x1b0) = DAT_00925b14;
  }
  return;
}

