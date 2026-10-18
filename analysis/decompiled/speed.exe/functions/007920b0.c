/* speed.exe 007920b0 FUN_007920b0; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 0045ce70 FUN_0045ce70
 * calls 0045ce40 FUN_0045ce40
 * calls 00735960 FUN_00735960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007920b0(void)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_8;
  undefined4 local_4;
  
  uVar2 = FUN_0045ce40();
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x20);
  local_8 = 0.0;
  FUN_0078a3a0(&local_8,0x20);
  fVar1 = local_8;
  fVar3 = (float10)FUN_0045ce70(local_4,uVar2);
  local_8 = (float)(fVar3 * (float10)_DAT_00890d60);
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x20);
  FUN_00735960(uVar2,fVar1,local_8,local_4);
  return;
}

