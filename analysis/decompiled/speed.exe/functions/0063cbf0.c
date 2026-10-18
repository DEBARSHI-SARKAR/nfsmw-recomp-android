/* speed.exe 0063cbf0 FUN_0063cbf0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00628d30 FUN_00628d30
 */

void __fastcall FUN_0063cbf0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar1 = FUN_005cc240("GameDevice");
  for (piVar2 = DAT_00920464; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    if (*piVar2 == iVar1) {
      piVar2 = (int *)(*(code *)piVar2[1])(0);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
        *(int **)(param_1 + 8 + *(int *)(param_1 + 4) * 4) = piVar2;
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
        goto LAB_0063cc28;
      }
      break;
    }
  }
  *(undefined4 *)(param_1 + 8 + *(int *)(param_1 + 4) * 4) = 0;
LAB_0063cc28:
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  FUN_00628d30();
  iVar1 = FUN_005cc240("MouseDevice");
  piVar2 = DAT_00920464;
  do {
    if (piVar2 == (int *)0x0) {
LAB_0063cca7:
      iVar1 = FUN_005cc240("KeyboardDevice");
      piVar2 = DAT_00920464;
      if (DAT_00920464 != (int *)0x0) {
        while (*piVar2 != iVar1) {
          piVar2 = (int *)piVar2[2];
          if (piVar2 == (int *)0x0) {
            return;
          }
        }
        iVar1 = (*(code *)piVar2[1])(*(undefined4 *)(param_1 + 4));
        if (iVar1 != 0) {
          *(int *)(param_1 + 8 + *(int *)(param_1 + 4) * 4) = iVar1;
          *(uint *)(param_1 + 0x48) =
               *(uint *)(param_1 + 0x48) | 1 << ((byte)*(int *)(param_1 + 4) & 0x1f);
          *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        }
      }
      return;
    }
    if (*piVar2 == iVar1) {
      iVar1 = (*(code *)piVar2[1])(*(undefined4 *)(param_1 + 4));
      if (iVar1 != 0) {
        *(int *)(param_1 + 8 + *(int *)(param_1 + 4) * 4) = iVar1;
        *(uint *)(param_1 + 0x48) =
             *(uint *)(param_1 + 0x48) | 1 << ((byte)*(int *)(param_1 + 4) & 0x1f);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      goto LAB_0063cca7;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

