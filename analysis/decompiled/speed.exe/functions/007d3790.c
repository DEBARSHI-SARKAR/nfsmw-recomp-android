/* speed.exe 007d3790 __setlocale_set_cat; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007e24a0 _memcmp
 * calls 007d6cb0 __security_check_cookie
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007e2560 ___crtGetStringTypeA
 * calls 007d3c70 __expandlocale
 * calls 007d1120 _strcmp
 * calls 007d0cd0 _strlen
 * calls 007c6700 __malloc_dbg
 * calls 007d0bd0 FUN_007d0bd0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __setlocale_set_cat
   
   Library: Visual Studio 2003 Debug */

undefined4 __setlocale_set_cat(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  BOOL BVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  undefined1 local_1c4 [8];
  ushort local_1bc [128];
  undefined *local_bc;
  undefined4 local_b8;
  LPWORD local_b4;
  ushort local_b0 [4];
  int local_a8;
  LPWORD local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  char local_94 [140];
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  iVar1 = __expandlocale(param_2,local_94,local_b0,&local_b4,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = _strcmp(local_94,(char *)(&DAT_00906c7c)[param_1 * 3]);
    if (iVar1 == 0) {
      uVar2 = (&DAT_00906c7c)[param_1 * 3];
    }
    else {
      uVar6 = 0x2e2;
      pcVar5 = "setlocal.c";
      uVar2 = 2;
      sVar3 = _strlen(local_94);
      local_a8 = __malloc_dbg(sVar3 + 1,uVar2,pcVar5,uVar6);
      if (local_a8 == 0) {
        uVar2 = 0;
      }
      else {
        local_bc = (undefined *)(&DAT_00906c7c)[param_1 * 3];
        local_b8 = *(undefined4 *)(&DAT_009bad98 + param_1 * 4);
        FID_conflict__memcpy(local_1c4,&DAT_009baf00 + param_1 * 6,6);
        local_a4 = DAT_009badb0;
        uVar2 = FUN_007d0bd0(local_a8,local_94);
        (&DAT_00906c7c)[param_1 * 3] = uVar2;
        *(uint *)(&DAT_009bad98 + param_1 * 4) = (uint)local_b0[0];
        FID_conflict__memcpy(&DAT_009baf00 + param_1 * 6,local_b0,6);
        if (param_1 == 2) {
          DAT_009badb0 = local_b4;
          local_1d0 = DAT_00906b60;
          local_1cc = DAT_00906b64;
          for (local_98 = 0; local_98 < 5; local_98 = local_98 + 1) {
            if (DAT_009badb0 == *(LPWORD *)(&DAT_00906b40 + local_98 * 8)) {
              if (local_98 != 0) {
                _DAT_00906b40 = *(LPWORD *)(&DAT_00906b40 + local_98 * 8);
                DAT_00906b44 = (&DAT_00906b44)[local_98 * 2];
                *(undefined4 *)(&DAT_00906b40 + local_98 * 8) = local_1d0;
                (&DAT_00906b44)[local_98 * 2] = local_1cc;
              }
              break;
            }
            local_a0 = *(undefined4 *)(&DAT_00906b40 + local_98 * 8);
            local_9c = (&DAT_00906b44)[local_98 * 2];
            *(undefined4 *)(&DAT_00906b40 + local_98 * 8) = local_1d0;
            (&DAT_00906b44)[local_98 * 2] = local_1cc;
            local_1d0 = local_a0;
            local_1cc = local_9c;
          }
          if (local_98 == 5) {
            BVar4 = ___crtGetStringTypeA
                              ((_locale_t)0x1,0x8bd000,(LPCSTR)0x7f,(int)local_1bc,DAT_009badb0,
                               DAT_009bada0,1);
            if (BVar4 == 0) {
              DAT_00906b44 = 0;
            }
            else {
              for (local_1c8 = 0; local_1c8 < 0x7f; local_1c8 = local_1c8 + 1) {
                local_1bc[local_1c8] = local_1bc[local_1c8] & 0x1ff;
              }
              iVar1 = _memcmp(local_1bc,&DAT_008bcf00,0xfe);
              DAT_00906b44 = (uint)(iVar1 == 0);
            }
            _DAT_00906b40 = DAT_009badb0;
          }
          DAT_00906ff0 = DAT_00906b44;
        }
        if (param_1 == 1) {
          DAT_009badb4 = local_b4;
        }
        iVar1 = (**(code **)(&DAT_00906c80 + param_1 * 0xc))();
        if (iVar1 == 0) {
          if (local_bc != &DAT_00906ae0) {
            __free_dbg(local_bc,2);
          }
          uVar2 = (&DAT_00906c7c)[param_1 * 3];
        }
        else {
          (&DAT_00906c7c)[param_1 * 3] = local_bc;
          __free_dbg(local_a8,2);
          *(undefined4 *)(&DAT_009bad98 + param_1 * 4) = local_b8;
          DAT_009badb0 = local_a4;
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

