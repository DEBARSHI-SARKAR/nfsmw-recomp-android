/* speed.exe 007b7670 FUN_007b7670; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 00507dc0 FUN_00507dc0
 */

void __fastcall FUN_007b7670(int param_1)

{
  int iVar1;
  undefined1 local_40 [64];
  
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  FUN_004647c0(local_40,"GLOBAL\\HUDS_Custom_%2.2d.bin",0);
  iVar1 = FUN_00507dc0(local_40,&LAB_007aa3b0,param_1,0);
  (&DAT_009b9d50)[*(int *)(param_1 + 0x1bc)] = iVar1 != 0;
  return;
}

