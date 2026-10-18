/* speed.exe 00421560 FUN_00421560; analysis pseudocode, not buildable source.
 * calls 004131c0 FUN_004131c0
 * calls 00418200 FUN_00418200
 */

void __fastcall FUN_00421560(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_18 = DAT_008a2fb4;
  local_14 = DAT_008a2fb8;
  local_10 = DAT_008a2fbc;
  FUN_004131c0(local_c);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 100))();
  if (*(int **)(iVar1 + 0x1c) == (int *)0x0) {
    puVar3 = &DAT_008a2fb4;
  }
  else {
    piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x1c) + 0x54))();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x24))();
  }
  piVar2 = *(int **)(param_1 + 0x4c);
  fVar5 = (float10)(**(code **)(*piVar2 + 0x2c))(iVar1 + 0x10,puVar3);
  uVar4 = (**(code **)(*piVar2 + 0x20))((float)fVar5);
  FUN_00418200(&local_18,uVar4);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x38))(0x41de38e4);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x48) + 0x3c))(&stack0xffffffd8);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(7);
  return;
}

