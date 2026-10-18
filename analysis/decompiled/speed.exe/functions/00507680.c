/* speed.exe 00507680 FUN_00507680; analysis pseudocode, not buildable source.
 * calls 005070e0 FUN_005070e0
 * calls 00505050 FUN_00505050
 * calls 0064a980 FUN_0064a980
 * calls 0064a990 FUN_0064a990
 */

void FUN_00507680(int *param_1,undefined4 param_2,int param_3)

{
  if (*param_1 != -0x7fecbff0) {
    FUN_0064a980(param_1);
    FUN_0064a990(param_1 + 2,param_1[1] + 8 + (int)param_1);
  }
  FUN_005070e0(param_1,*(undefined4 *)(param_3 + 0x3c));
  FUN_00505050(*(undefined4 *)(param_3 + 0x3c));
  return;
}

