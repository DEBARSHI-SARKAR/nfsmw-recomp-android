/* speed.exe 008373b0 FUN_008373b0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_008373b0(int *param_1)

{
  if ((*(int *)(*param_1 + 0xf0) == 1) && ((*(uint *)(*param_1 + 0xf8) & 0x2000) != 0)) {
    return 1;
  }
  return 0;
}

