/* speed.exe 0070c490 FUN_0070c490; analysis pseudocode, not buildable source.
 * calls 0070b5e0 FUN_0070b5e0
 * calls 0070b300 FUN_0070b300
 */

void __fastcall FUN_0070c490(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_4;
  
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
    local_4 = param_1;
    FUN_0070b5e0(&local_4,*puVar1,puVar1,&stack0x00000004);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
    if (local_4 != iVar2) {
      FUN_0070b300(&stack0x00000004,local_4,iVar2);
    }
  }
  return;
}

