/* speed.exe 006d8070 FUN_006d8070; analysis pseudocode, not buildable source.
 * calls 006c9b60 FUN_006c9b60
 */

undefined4 * __fastcall FUN_006d8070(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)((int)param_1 + 0x23) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_006c9b60();
  FUN_006c9b60();
  return param_1;
}

