/*-----------------------------------------------------------------------------
 *  FILE: sega_int.h
 *
 *      Copyright(c) 1994 SEGA.
 *
 *  PURPOSE:
 *
 *      INT���C�u�����w�b�_�t�@�C���B
 *
 *  DESCRIPTION:
 *
 *  AUTHOR(S)
 *
 *      1994-07-05  N.T Ver.1.00
 *
 *  MOD HISTORY:
 *
 *-----------------------------------------------------------------------------
 */

#ifndef SEGA_INT_H
#define SEGA_INT_H
/*
 * C VIRTUAL TYPES DEFINITIONS
 */
#include "sega_sys.h"

/*
 * GLOBAL DEFINES/MACROS DEFINES
 */

/* �萔 */
/**** ���荞�݃A�h���X���W�X�^ ***********************************************/
#define INT_REG_IST     ((Uint32 *)0x25fe00a4)  /* ���荞�݃X�e�[�^�X���W�X�^*/
#define INT_REG_IACK    ((Uint32 *)0x25fe00bc)  /* A-Bus���荞�݃A�N�m���b�W */
/***** ���荞�݃}�X�N�r�b�g�l�萔 ********************************************/
#define INT_MSK_NULL      0             /* �w��Ȃ�                          */
#define INT_MSK_ALL      (INT_MSK_ABUS     |    /* �S�w��@                 */\
                          INT_MSK_SPR      |\
                          INT_MSK_DMAI     |\
                          INT_MSK_DMA0     |\
                          INT_MSK_DMA1     |\
                          INT_MSK_DMA2     |\
                          INT_MSK_PAD      |\
                          INT_MSK_SYS      |\
                          INT_MSK_SND      |\
                          INT_MSK_DSP      |\
                          INT_MSK_TIM1     |\
                          INT_MSK_TIM0     |\
                          INT_MSK_HBLK_IN  |\
                          INT_MSK_VBLK_OUT |\
                          INT_MSK_VBLK_IN  )
#define INT_MSK_ABUS     (1 << 15)      /* A-Bus                             */
#define INT_MSK_SPR      (1 << 13)      /* �X�v���C�g�`��I��                */
#define INT_MSK_DMAI     (1 << 12)      /* DMA�C���[�K��                     */
#define INT_MSK_DMA0     (1 << 11)      /* ���x��0-DMA                       */
#define INT_MSK_DMA1     (1 << 10)      /* ���x��1-DMA                       */
#define INT_MSK_DMA2     (1 <<  9)      /* ���x��2-DMA                       */
#define INT_MSK_PAD      (1 <<  8)      /* PAD                               */
#define INT_MSK_SYS      (1 <<  7)      /* �V�X�e���}�l�[�W��                */
#define INT_MSK_SND      (1 <<  6)      /* �T�E���h���N�G�X�g                */
#define INT_MSK_DSP      (1 <<  5)      /* DSP�I���@�@                       */
#define INT_MSK_TIM1     (1 <<  4)      /* �^�C�}-1                          */
#define INT_MSK_TIM0     (1 <<  3)      /* �^�C�}-0                          */
#define INT_MSK_HBLK_IN  (1 <<  2)      /* H-�u�����N-IN                     */
#define INT_MSK_VBLK_OUT (1 <<  1)      /* V-�u�����N-OUT                    */
#define INT_MSK_VBLK_IN  (1 <<  0)      /* V-�u�����N-IN                     */

/***** ���荞�݃X�e�[�^�X�r�b�g�l�萔 ****************************************/
#define INT_ST_NULL      0              /* �w��Ȃ�                          */
#define INT_ST_ALL      (INT_ST_ABUS      |    /* �S�w��@                 */\
                          INT_ST_SPR      |\
                          INT_ST_DMAI     |\
                          INT_ST_DMA0     |\
                          INT_ST_DMA1     |\
                          INT_ST_DMA2     |\
                          INT_ST_PAD      |\
                          INT_ST_SYS      |\
                          INT_ST_SND      |\
                          INT_ST_DSP      |\
                          INT_ST_TIM1     |\
                          INT_ST_TIM0     |\
                          INT_ST_HBLK_IN  |\
                          INT_ST_VBLK_OUT |\
                          INT_ST_VBLK_IN  )
#define INT_ST_ABUS     (INT_ST_ABUS01 |        /* A-Bus                   */\
                         INT_ST_ABUS02 |\
                         INT_ST_ABUS03 |\
                         INT_ST_ABUS04 |\
                         INT_ST_ABUS05 |\
                         INT_ST_ABUS06 |\
                         INT_ST_ABUS07 |\
                         INT_ST_ABUS08 |\
                         INT_ST_ABUS09 |\
                         INT_ST_ABUS10 |\
                         INT_ST_ABUS11 |\
                         INT_ST_ABUS12 |\
                         INT_ST_ABUS13 |\
                         INT_ST_ABUS14 |\
                         INT_ST_ABUS15 |\
                         INT_ST_ABUS16 )
#define INT_ST_ABUS01   (1 << 31)       /* A-Bus01                           */
#define INT_ST_ABUS02   (1 << 30)       /* A-Bus02                           */
#define INT_ST_ABUS03   (1 << 29)       /* A-Bus03                           */
#define INT_ST_ABUS04   (1 << 28)       /* A-Bus04                           */
#define INT_ST_ABUS05   (1 << 27)       /* A-Bus05                           */
#define INT_ST_ABUS06   (1 << 26)       /* A-Bus06                           */
#define INT_ST_ABUS07   (1 << 25)       /* A-Bus07                           */
#define INT_ST_ABUS08   (1 << 24)       /* A-Bus08                           */
#define INT_ST_ABUS09   (1 << 23)       /* A-Bus09                           */
#define INT_ST_ABUS10   (1 << 22)       /* A-Bus10                           */
#define INT_ST_ABUS11   (1 << 21)       /* A-Bus11                           */
#define INT_ST_ABUS12   (1 << 20)       /* A-Bus12                           */
#define INT_ST_ABUS13   (1 << 19)       /* A-Bus13                           */
#define INT_ST_ABUS14   (1 << 18)       /* A-Bus14                           */
#define INT_ST_ABUS15   (1 << 17)       /* A-Bus15                           */
#define INT_ST_ABUS16   (1 << 16)       /* A-Bus16                           */
#define INT_ST_SPR      (1 << 13)       /* �X�v���C�g�`��I��                */
#define INT_ST_DMAI     (1 << 12)       /* DMA�C���[�K��                     */
#define INT_ST_DMA0     (1 << 11)       /* ���x��0-DMA                       */
#define INT_ST_DMA1     (1 << 10)       /* ���x��1-DMA                       */
#define INT_ST_DMA2     (1 <<  9)       /* ���x��2-DMA                       */
#define INT_ST_PAD      (1 <<  8)       /* PAD                               */
#define INT_ST_SYS      (1 <<  7)       /* �V�X�e���}�l�[�W��                */
#define INT_ST_SND      (1 <<  6)       /* �T�E���h���N�G�X�g                */
#define INT_ST_DSP      (1 <<  5)       /* DSP�I���@�@                       */
#define INT_ST_TIM1     (1 <<  4)       /* �^�C�}-1                          */
#define INT_ST_TIM0     (1 <<  3)       /* �^�C�}-0                          */
#define INT_ST_HBLK_IN  (1 <<  2)       /* H-�u�����N-IN                     */
#define INT_ST_VBLK_OUT (1 <<  1)       /* V-�u�����N-OUT                    */
#define INT_ST_VBLK_IN  (1 <<  0)       /* V-�u�����N-IN                     */

/***** �x�N�^�ԍ��萔 ********************************************************/
/********* SCU ***************************************************************/
#define INT_SCU_SPR         0x4d        /* �X�v���C�g�`��I��                */
#define INT_SCU_DMAI        0x4c        /* DMA�C���[�K��                     */
#define INT_SCU_DMA0        0x4b        /* ���x��0-DMA                       */
#define INT_SCU_DMA1        0x4a        /* ���x��1-DMA                       */
#define INT_SCU_DMA2        0x49        /* ���x��2-DMA                       */
#define INT_SCU_PAD         0x48        /* PAD                               */
#define INT_SCU_SYS         0x47        /* �V�X�e���}�l�[�W��                */
#define INT_SCU_SND         0x46        /* �T�E���h���N�G�X�g                */
#define INT_SCU_DSP         0x45        /* DSP�I���@�@                       */
#define INT_SCU_TIM1        0x44        /* �^�C�}-1                          */
#define INT_SCU_TIM0        0x43        /* �^�C�}-0                          */
#define INT_SCU_HBLK_IN     0x42        /* H-�u�����N-IN                     */
#define INT_SCU_VBLK_OUT    0x41        /* V-�u�����N-OUT                    */
#define INT_SCU_VBLK_IN     0x40        /* V-�u�����N-IN                     */
     
/********* CPU ***************************************************************/
#define INT_CPU_DIVU        0v6e        /* ���Z��                            */
#define INT_CPU_DMAC0       0x6d        /* DMAC�`���l��0                     */
#define INT_CPU_DMAC1       0x6c        /* DMAC�`���l��1                     */
#define INT_CPU_WDT         0x68        /* WDT�C���^�[�o��                   */
#define INT_CPU_BSC         0x69        /* BSC�R���y�A�}�b�`                 */
#define INT_CPU_SCI_ERI     0x60        /* SCI��M�G���[�@�@                 */
#define INT_CPU_SCI_RXI     0x61        /* SCI��M�f�[�^�t��                 */
#define INT_CPU_SCI_TXI     0x62        /* SCI��M�f�[�^�G���v�e�B           */
#define INT_CPU_SCI_TEI     0x63        /* SCI���M�I��  �@�@                 */
#define INT_CPU_FRT_ICI     0x64        /* FRT�C���v�b�g�L���v�`��           */
#define INT_CPU_FRT_OCI     0x65        /* FRT�A�E�g�v�b�g�R���y�A           */
#define INT_CPU_FRT_OVI     0x66        /* FRT�I�[�o�t���[�@                 */

/***** �A�N�m���b�W�l *******************************************************/
#define INT_ACK_ENA         0x1         /* �L��                              */
#define INT_ACK_DIS         0x0         /* �ێ�                              */

/******************************************************************************
 *
 * NAME:    INT_GetMsk()        -   ���荞�݃}�X�N���W�X�^�擾
 *
 * PARAMETERS :
 *      �Ȃ��B
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      (1) Uint32  ���荞�݃}�X�N�r�b�g�l
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_GetMsk(a) SYS_GETSCUIM

/******************************************************************************
 *
 * NAME:    INT_SetMsk()    -   ���荞�݃}�X�N���W�X�^�ݒ�
 *
 * PARAMETERS :
 *      (1) Uint32 msk_bit      <i>   ���荞�݃}�X�N�r�b�g�l
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      �Ȃ��B
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_SetMsk(msk_bit) SYS_SETSCUIM(msk_bit)

/******************************************************************************
 *
 * NAME:   INT_ChgMsk()     -   ���荞�݃}�X�N���W�X�^�ύX
 *
 * PARAMETERS :
 *      (1) Uint32 ena_msk_bit  <i>   ���荞�݃}�X�N�r�b�g�i�C�l�[�u��)
 *      (2) Uint32 dis_msk_bit  <i>   ���荞�݃}�X�N�r�b�g�i�f�B�Z�[�u��)
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      �Ȃ��B
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_ChgMsk(ena_msk_bit, dis_msk_bit)\
        SYS_CHGSCUIM(~(ena_msk_bit), dis_msk_bit)

/******************************************************************************
 *
 * NAME:    INT_GetStat()   -   ���荞�݃X�e�[�^�X���W�X�^�擾
 *
 * PARAMETERS :
 *      �Ȃ��B
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      (1) Uint32  ���荞�݃X�e�[�^�X���W�X�^�l
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_GetStat()   (*INT_REG_IST)

/******************************************************************************
 *
 * NAME:    INT_ResStat()       -   ���荞�݃X�e�[�^�X���W�X�^���Z�b�g
 *
 * PARAMETERS :
 *      (1) Uint32 status_bit   <i>   ���荞�݃X�e�[�^�X�r�b�g�l
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      �Ȃ��B
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_ResStat(status_bit)\
    do{\
        *INT_REG_IST = status_bit;\
    }while(FALSE)

/******************************************************************************
 *
 * NAME:    INT_SetAck()            -   A-Bus���荞�݃A�N�m���b�W�ݒ�
 *
 * PARAMETERS :
 *      (1) Uint32 ack                  <i>   �A�N�m���b�W�l
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      �Ȃ��B
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_SetAck(ack)\
    do{\
        *INT_REG_IACK = ack;\
    }while(FALSE)

/******************************************************************************
 *
 * NAME:    INT_GetAck()            -   A-Bus���荞�݃A�N�m���b�W�擾
 *
 * PARAMETERS :
 *      �Ȃ��B
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      (1) Uint32  �A�N�m���b�W�l
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_GetAck()    (*INT_REG_IACK)

/******************************************************************************
 *
 * NAME:    INT_SetFunc()       -   ���荞�݊֐��o�^ 
 *
 * PARAMETERS :
 *      (1) Uint32 num      <i>   �x�N�^�ԍ�
 *      (2) void *hdr       <i>   ���荞�݊֐��A�h���X
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_SetFunc(num, hdr)   SYS_SETSINT(num, hdr)

/******************************************************************************
 *
 * NAME:    INT_SetScuFunc()    -   SCU�֐��o�^ 
 *
 * PARAMETERS :
 *      (1) Uint32 num      <i>   �x�N�^�ԍ�(SCU�x�N�^�ԍ�)
 *      (2) void *hdr       <i>   SCU�֐��A�h���X
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_SetScuFunc(num, hdr)    SYS_SETUINT(num, hdr)

/******************************************************************************
 *
 * NAME:    INT_GetFunc()       -   ���荞�݊֐��A�h���X�擾
 *
 * PARAMETERS :
 *      (1) Uint32 num      <i>   �x�N�^�ԍ�
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      (1) void (*)()  ���荞�݊֐��A�h���X
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_GetFunc(num) SYS_GETSINT(num)

/******************************************************************************
 *
 * NAME:    INT_GetScuFunc()       -   SCU�֐��A�h���X�擾
 *
 * PARAMETERS :
 *      (1) Uint32 num      <i>   �x�N�^�ԍ�(SCU�x�N�^�ԍ�)
 *
 * DESCRIPTION:
 *
 * PRECONDITIONS:
 *      �Ȃ��B
 *
 * POSTCONDITIONS:
 *      (1) void (*)()  SCU�֐��A�h���X
 *
 * CAVEATS:
 *      �Ȃ��B
 *
 ******************************************************************************
 */

#define INT_GetScuFunc(num) SYS_GETUINT(num)

/*
 * STRUCTURE DECLARATIONS
 */

/*
 * TYPEDEFS
 */

/*
 * EXTERNAL VARIABLE DECLARATIONS
 */

/*
 * EXTERNAL FUNCTION PROTOTYPE  DECLARATIONS
 */

#endif  /* ifndef SEGA_INT_H */