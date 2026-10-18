/* speed.exe 0071aff0 FUN_0071aff0; analysis pseudocode, not buildable source.
 * calls 006ff320 FUN_006ff320
 * calls 00717740 FUN_00717740
 * calls 00709d00 FUN_00709d00
 * calls 004cb460 FUN_004cb460
 */

void __fastcall FUN_0071aff0(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = DAT_00993cc8;
  if (DAT_00993cc8 != 0) {
    bVar3 = *(byte *)(DAT_00993cc8 + 0x54) & 1;
    if ((bVar3 == 0) && ((*(uint *)(param_1 + 0x24) & 0x600) == 0)) {
      iVar5 = FUN_004cb460(0x4c);
      if (iVar5 == 0) {
        cVar4 = FUN_00709d00(0x4c,4);
        if (cVar4 == '\0') {
          cVar4 = FUN_006ff320(0x4c);
          if ((cVar4 == '\0') && (*(int **)(iVar2 + 0xdc) != (int *)0x0)) {
            (**(code **)(**(int **)(iVar2 + 0xdc) + 0x158))();
            FUN_00717740(*(undefined4 *)(iVar2 + 0xdc),0,0);
                    /* WARNING: Could not recover jumptable at 0x0071b081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(**(int **)(iVar2 + 0xdc) + 0x160))();
            return;
          }
        }
      }
    }
    else {
      if ((((bVar3 != 0) && ((*(uint *)(param_1 + 0x24) & 0x400) == 0)) ||
          ((((*(uint *)(DAT_00993cc8 + 0x54) >> 2 & 1) != 0 &&
            ((*(uint *)(param_1 + 0x24) & 0x3000) == 0)) &&
           ((*(uint *)(param_1 + 0x24) & 0x400) != 0)))) && (*(int *)(DAT_00993cc8 + 0xdc) != 0)) {
        iVar5 = FUN_004cb460(0x4c);
        if (iVar5 == 0) {
          (**(code **)(**(int **)(iVar2 + 0xdc) + 0x158))();
        }
        else {
          (**(code **)(**(int **)(iVar2 + 0xdc) + 0x15c))();
        }
        FUN_00717740(*(undefined4 *)(iVar2 + 0xdc),1,0);
        uVar1 = *(uint *)(param_1 + 0x24);
        *(uint *)(param_1 + 0x24) = uVar1 | 0x400;
        if ((*(uint *)(iVar2 + 0x54) >> 2 & 1) != 0) {
          *(uint *)(param_1 + 0x24) = uVar1 | 0x1400;
        }
      }
      if (((((*(byte *)(iVar2 + 0x54) & 1) != 0) &&
           (uVar1 = *(uint *)(param_1 + 0x24), (uVar1 & 0x400) != 0)) &&
          (((*(uint *)(iVar2 + 0x54) >> 1 & 1) != 0 &&
           (((uVar1 & 0x800) == 0 && ((uVar1 & 0x6000) != 0)))))) &&
         (((uVar1 & 0x200) != 0 && (*(int **)(iVar2 + 0xdc) != (int *)0x0)))) {
        (**(code **)(**(int **)(iVar2 + 0xdc) + 0x98))(8);
        FUN_00717740(*(undefined4 *)(iVar2 + 0xdc),0,4);
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x800;
      }
    }
  }
  return;
}

