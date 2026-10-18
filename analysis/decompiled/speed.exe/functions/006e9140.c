/* speed.exe 006e9140 FUN_006e9140; analysis pseudocode, not buildable source.
 * calls 005cb420 FUN_005cb420
 * calls 006e9020 FUN_006e9020
 * calls 005cb490 FUN_005cb490
 * calls 00401670 FUN_00401670
 */

void FUN_006e9140(undefined4 *param_1,undefined4 param_2,float param_3)

{
  float10 fVar1;
  float fVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  fVar1 = (float10)FUN_006e9020();
  fVar2 = (float)(fVar1 * (float10)param_3);
  fVar1 = (float10)FUN_006e9020(fVar2);
  FUN_005cb420(local_40,fVar2);
  FUN_00401670(param_2,local_40,&local_4c);
  FUN_005cb490(local_40,(float)(fVar1 * (float10)param_3));
  FUN_00401670(&local_4c,local_40,&local_4c);
  *param_1 = local_4c;
  param_1[1] = local_48;
  param_1[2] = local_44;
  return;
}

