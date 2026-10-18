/* speed.exe 007939e0 FUN_007939e0; analysis pseudocode, not buildable source.
 * calls 0078e7d0 FUN_0078e7d0
 * calls 0083b210 FUN_0083b210
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 * calls 0083b8a0 FUN_0083b8a0
 */

undefined4 __thiscall FUN_007939e0(undefined1 *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_0078e7d0();
    FUN_0078e7d0();
    uVar1 = FUN_0083a670(param_2,&DAT_008b6d40,param_1,0x10,&DAT_00890978);
    FUN_0083b210(uVar1);
    uVar1 = FUN_0083a670(param_2,&DAT_008b6d8c,param_1 + 0x10,0xb0,&DAT_0089b350);
    FUN_0083b8a0(uVar1);
    uVar1 = FUN_0083a670(param_2,"LWSTAT",param_1 + 0xc0,0xb0,&DAT_0089b350);
    FUN_0083b8a0(uVar1);
    uVar1 = FUN_0083a670(param_2,"LMSTAT",param_1 + 0x170,0xb0,&DAT_0089b350);
    FUN_0083b8a0(uVar1);
    uVar1 = FUN_0083a670(param_2,"LGAME",0);
    uVar1 = FUN_0083abc0(uVar1);
    *(undefined4 *)(param_1 + 0x220) = uVar1;
    return 0;
  }
  return 0xffffffff;
}

