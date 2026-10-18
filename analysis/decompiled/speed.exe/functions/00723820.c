/* speed.exe 00723820 FUN_00723820; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00723820(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 100 + 0xc0 + param_1);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  puVar1[9] = 0xffffffff;
  *(undefined2 *)(puVar1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x2b0) = 1;
  return;
}

