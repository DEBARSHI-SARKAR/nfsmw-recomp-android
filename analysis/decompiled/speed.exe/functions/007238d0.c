/* speed.exe 007238d0 FUN_007238d0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_007238d0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined1 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 100 + 0xc0 + param_1);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = *param_4;
  puVar1[4] = param_4[1];
  puVar1[5] = *param_5;
  puVar1[6] = param_5[1];
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined1 *)((int)puVar1 + 0x1d) = param_6;
  return;
}

