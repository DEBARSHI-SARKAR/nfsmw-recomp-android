/* speed.exe 006c1120 FUN_006c1120; analysis pseudocode, not buildable source.
 * calls 006c6cc0 FUN_006c6cc0
 * calls 006c0f80 FUN_006c0f80
 * calls 006c8000 FUN_006c8000
 */

undefined4 __thiscall
FUN_006c1120(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = 1;
  FUN_006c8000(param_4,*(undefined4 *)(param_2 + 4));
  FUN_006c6cc0(param_3,0);
  param_2 = param_5;
  FUN_006c0f80(&param_2);
  return 1;
}

