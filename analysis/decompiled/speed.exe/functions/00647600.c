/* speed.exe 00647600 FUN_00647600; analysis pseudocode, not buildable source.
 * calls 00643730 FUN_00643730
 * calls 00646b20 FUN_00646b20
 * calls 00643880 FUN_00643880
 */

undefined4 FUN_00647600(undefined4 param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00643730(&local_8,param_1);
  param_1 = 0;
  FUN_00643880(local_8,local_4,&param_1);
  FUN_00646b20(&local_8,local_8,local_4);
  return param_1;
}

