/* speed.exe 0057ffb0 FUN_0057ffb0; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_0057ffb0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)param_2 + 0x36);
  if (param_2 + 1 <= puVar1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  if (param_2 + 1 <= puVar1) {
    *param_2 = 0;
    param_2 = param_2 + 1;
  }
  if ((undefined4 *)((int)param_2 + 1) <= puVar1) {
    *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x40);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if ((undefined4 *)((int)param_2 + 1) <= puVar1) {
    *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x41);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if ((undefined4 *)((int)param_2 + 1) <= puVar1) {
    *(undefined1 *)param_2 = *(undefined1 *)(param_1 + 0x42);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (param_2 + 5 <= puVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x70);
    param_2[1] = *(undefined4 *)(param_1 + 0x74);
    param_2[2] = *(undefined4 *)(param_1 + 0x78);
    param_2[3] = *(undefined4 *)(param_1 + 0x7c);
    param_2[4] = *(undefined4 *)(param_1 + 0x80);
    param_2 = param_2 + 5;
  }
  if (param_2 + 5 <= puVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x98);
    param_2[1] = *(undefined4 *)(param_1 + 0x9c);
    param_2[2] = *(undefined4 *)(param_1 + 0xa0);
    param_2[3] = *(undefined4 *)(param_1 + 0xa4);
    param_2[4] = *(undefined4 *)(param_1 + 0xa8);
    param_2 = param_2 + 5;
  }
  if ((undefined4 *)((int)param_2 + 3) <= puVar1) {
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x3b);
    *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)(param_1 + 0x3d);
    param_2 = (undefined4 *)((int)param_2 + 3);
  }
  return param_2;
}

