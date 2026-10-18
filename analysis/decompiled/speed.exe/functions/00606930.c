/* speed.exe 00606930 FUN_00606930; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 */

undefined4 FUN_00606930(undefined4 param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_DAT_008a3c88)[*param_2];
  if (puVar1[2] == (&PTR_DAT_008a3c88)[*param_3][2]) {
    FUN_00613880(param_1,"attempt to compare two %s values",puVar1);
    return 0;
  }
  FUN_00613880(param_1,"attempt to compare %s with %s",puVar1,(&PTR_DAT_008a3c88)[*param_3]);
  return 0;
}

