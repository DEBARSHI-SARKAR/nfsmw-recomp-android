/* speed.exe 008372d0 FUN_008372d0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008372d0(int *param_1)

{
  if ((param_1 != (int *)0x0) && ((*(uint *)(*param_1 + 0xf8) & 0x2000) == 0)) {
    return 0;
  }
  return 1;
}

