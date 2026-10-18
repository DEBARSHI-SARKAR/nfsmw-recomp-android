/* speed.exe 004ab000 FUN_004ab000; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004ab000(undefined4 *param_1,int param_2,undefined1 param_3)

{
  *param_1 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = *(undefined4 *)(param_2 + 0x14);
  param_1[4] = (uint)*(ushort *)(param_2 + 0xc);
  param_1[5] = 0xffffffff;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = param_3;
  param_1[7] = DAT_00925ae8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

