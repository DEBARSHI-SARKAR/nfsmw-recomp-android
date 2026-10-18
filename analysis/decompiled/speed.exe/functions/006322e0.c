/* speed.exe 006322e0 FUN_006322e0; analysis pseudocode, not buildable source.
 * calls 00625a50 FUN_00625a50
 */

int __thiscall FUN_006322e0(int param_1,byte param_2)

{
  FUN_00625a50();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

