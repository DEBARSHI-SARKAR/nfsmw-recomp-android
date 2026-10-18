/* speed.exe 005b3fa0 FUN_005b3fa0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005b3fa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           ((*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x88)) * 0x30
            + 0xc + *(int *)(param_1 + 0x90));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  return;
}

