/* speed.exe 005b3f60 FUN_005b3f60; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b3f60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           ((*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x88)) * 0x30
            + 4 + *(int *)(param_1 + 0x90));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  return;
}

