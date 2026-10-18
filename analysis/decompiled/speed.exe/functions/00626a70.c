/* speed.exe 00626a70 FUN_00626a70; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 00659250 FUN_00659250
 */

undefined4 FUN_00626a70(int param_1)

{
  undefined4 uVar1;
  
  FUN_00452880(param_1,1);
  if (param_1 != 0) {
    uVar1 = (*(code *)**(undefined4 **)PTR_PTR_008f7ea8)(param_1,0);
    return uVar1;
  }
  return 0;
}

