/* speed.exe 00843290 FUN_00843290; analysis pseudocode, not buildable source.
 * calls 008559b0 FUN_008559b0
 * calls 008550f0 FUN_008550f0
 * calls 007c6100 _sprintf
 * calls 007d6cb0 __security_check_cookie
 * calls 00855480 FUN_00855480
 * calls 008421c0 FUN_008421c0
 * calls 007c4840 FID_conflict:_memcpy
 * calls 0083c580 FUN_0083c580
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 00855650 FUN_00855650
 * calls 00842780 FUN_00842780
 * calls 00846040 FUN_00846040
 * calls 0083abc0 FUN_0083abc0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00843290(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  void *_Src;
  void *_Src_00;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if (param_1[0x48f] == 2) {
    FUN_00855650(param_1[0x489]);
    iVar3 = FUN_00855480(param_1[0x489],0x64617461);
    if (iVar3 < 0) {
      param_1[0x48f] = 5;
    }
    else if (0 < iVar3) {
      iVar3 = FUN_00855480(param_1[0x489],0x636f6465);
      param_1[0x48f] = (-(uint)(iVar3 != 200) & 2) + 3;
    }
  }
  iVar3 = param_1[0x48f];
  do {
    if (iVar3 != 3) {
LAB_00843408:
      if (param_1[0x48f] == 1) {
        pcVar4 = (char *)param_1[0x48a];
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        param_1[0x48a] = param_1[0x48a] + ((int)pcVar4 - (int)pcVar1);
        param_1[0x48b] = param_1[0x48b] - ((int)pcVar4 - (int)pcVar1);
        param_1[0x48f] = 4;
      }
      if (param_1[0x48f] == 4) {
        iVar3 = FUN_008421c0(param_1,*param_1,"$last");
        _Src = (void *)FUN_008421c0(param_1,iVar3 + 1,"$incl");
        _Src_00 = (void *)FUN_008421c0(param_1,_Src,"$next");
        if ((((_Src != (void *)0x0) && (_Src_00 != (void *)0x0)) &&
            ((int)_Src_00 - (int)_Src < (int)param_1[0x48b])) &&
           (iVar3 = FUN_00846040(_Src,&DAT_008c6bbc), iVar3 != 0)) {
          FID_conflict__memcpy((void *)param_1[0x48a],_Src,(int)_Src_00 - (int)_Src);
          FID_conflict__memcpy(_Src,_Src_00,param_1[0x48a] - (int)_Src);
          *(undefined1 *)param_1[0x48a] = 0;
          iVar7 = (int)_Src + (param_1[0x48a] - (int)_Src_00);
          uVar5 = FUN_0083a670(iVar7,&PTR_caseD_4_008c6b88,local_104,0x100,&DAT_00890978);
          FUN_0083b210(uVar5);
          uVar5 = FUN_0083a670(iVar7,&DAT_008b6d00,0);
          iVar3 = FUN_0083abc0(uVar5);
          FUN_0083c580(iVar7,(int)_Src_00 - iVar7,&PTR_caseD_4_008c6b88,&DAT_008c6bb8);
          param_1[0x48f] = 5;
          if ((local_104[0] != '\0') && (0x100 < (int)param_1[0x48b])) {
            iVar7 = _sprintf((char *)param_1[0x48a],"%%$00000000:");
            iVar6 = param_1[0x48a] + iVar7 + 1;
            param_1[0x48c] = iVar6;
            param_1[0x48a] = iVar6;
            param_1[0x48b] = param_1[0x48b] - (iVar7 + 1);
            FUN_00842780(local_104,0x100,param_1 + 0x43);
            iVar7 = FUN_008550f0(param_1[0x489],local_104,0);
            if (-1 < iVar7) {
              param_1[0x48f] = 2;
              param_1[0x48d] = param_1[0x48d] + iVar3 * 1000;
            }
          }
        }
      }
      return;
    }
    FUN_00855650(param_1[0x489]);
    iVar3 = FUN_008559b0(param_1[0x489],param_1[0x48a],0,param_1[0x48b]);
    if (iVar3 < 1) {
      if (iVar3 == -1) {
        param_1[0x48f] = 4;
      }
      else if (iVar3 < 0) {
        param_1[0x48f] = 5;
      }
      goto LAB_00843408;
    }
    iVar7 = param_1[0x48c];
    if (iVar7 == 0) {
      iVar7 = 0;
      iVar6 = 0;
      if (0 < iVar3) {
        iVar7 = 0;
        do {
          cVar2 = *(char *)(param_1[0x48a] + iVar6);
          if (cVar2 != '\r') {
            *(char *)(param_1[0x48a] + iVar7) = cVar2;
            iVar7 = iVar7 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar3);
      }
    }
    else {
      _sprintf((char *)(iVar7 + -10),"%08x:",(param_1[0x48a] - iVar7) + iVar3);
      iVar7 = iVar3;
    }
    iVar3 = param_1[0x48a];
    param_1[0x48b] = param_1[0x48b] - iVar7;
    param_1[0x48a] = (undefined1 *)(iVar3 + iVar7);
    *(undefined1 *)(iVar3 + iVar7) = 0;
    if ((int)param_1[0x48b] < 1) {
      param_1[0x48f] = 5;
    }
    iVar3 = param_1[0x48f];
  } while( true );
}

