/* speed.exe 0081e2cb FUN_0081e2cb; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0081e2cb(undefined2 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 3) = 0x7f;
  *(undefined1 *)(param_1 + 2) = 0x40;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[4] = 0;
  puVar1 = (undefined4 *)(param_1 + 0x2c);
  iVar2 = 4;
  do {
    puVar1[-4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0xc);
  param_1 = param_1 + 6;
  iVar2 = 6;
  do {
    *param_1 = 0;
    *puVar1 = 0;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

