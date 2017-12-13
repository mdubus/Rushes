; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    header.el                                          :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: brnsabyu <brnsabyu@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2017/11/26 18:57:47 by brnsabyu          #+#    #+#              ;
;    Updated: 2017/11/26 23:19:46 by brnsabyu         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

(defun header()
    (progn
    (setq fill0 "/* ************************************************************************** */\n/*                                                                            */\n/*     \
\
                                                   :::      ::::::::   */\n/*   ")
    (setq fname (buffer-name))
    (setq fill1 (substring "                                                   :+:      :+:    :+:   */\n/*                                                    +:+ +:+         +:+     */\n/\
\
*   By: " (length fname)))
    (setq user (getenv "USER"))
    (setq mail (getenv "MAIL"))
    (setq fill2 (substring "                                        +#+  +:+       +#+        */\n/*                                                +#+#+#+#+#+   +#+           */\n/*   Cre\
\
ated: "(+ (length user) (length mail))))
    (setq cdate (format-time-string "%Y/%m/%d %T"))
    (setq fill3 (substring "                                     #+#    #+#             */\n/*   Updated: " (+ (length cdate) (length user))))
    (setq udate (format-time-string "%Y/%m/%d %T"))
    (setq fill4 (substring "                                    ###   ########.fr       */\n/*                                                                            */\n/* ***********\
\
*************************************************************** */\n\n" (+ (length udate) (length user))))
  (goto-char (point-min))
  (insert fill0)
  (insert fname)
  (insert fill1)
  (insert user " <" mail ">")
  (insert fill2 cdate " by " user)
  (insert fill3 udate " by " user)
  (insert fill4)
)
)
(header())

(progn
  (setq buf (buffer-substring-no-properties 1 891))
  (setq tmp "/* ************************************************************************** */\n/*                                                                            */\n/*                                                        :::      ::::::::   */\n/*   header.el                                          :+:      :+:    :+:   */\n/*                                                    +:+ +:+         +:+     */\n/*   By: brnsabyu <brnsabyu@student.42.fr>          +#+  +:+       +#+        */\n/*                                                +#+#+#+#+#+   +#+           */\n/*   Created: 2017/11/26 17:14:33 by brnsabyu          #+#    #+#             */\n/*   Updated: 2017/11/26 17:14:33 by brnsabyu         ###   ########.fr       */\n/*                                                                            */\n/* ************************************************************************** */\n")
  (setq result nil)
  (setq q (compare-strings buf 0 248 tmp 0 248))
  (if /=  q t
      (setq result t))
  (if /= (compare-strings buf 299 414 tmp 299 414) t
      (setq result t))
  (if /= (compare-strings buf 457 581 tmp 457 581) t
      (setq result t))
  (if /= (compare-strings buf 600 604 tmp 600 604) t
      (setq result t))
  (if /= (compare-strings buf 622 662 tmp 622 662) t
      (setq result t))
  (if /= (compare-strings buf 681 685 tmp 681 685) t
      (setq result t))
  (if /= (compare-strings buf 702 891 tmp 702 891) t
      (setq result t))
  (if /= (compare-strings buf 585 586 tmp 585 586) t
      (setq result t))
  (if /= (compare-strings buf 588 589 tmp 588 589) t
      (setq result t))
  (if /= (compare-strings buf 590 591 tmp 590 591) t
      (setq result t))
  (if /= (compare-strings buf 592 593 tmp 592 593) t
      (setq result t))
  (if /= (compare-strings buf 594 595 tmp 594 595) t
      (setq result t))
  (if /= (compare-strings buf 667 668 tmp 667 668) t
      (setq result t))
  (if /= (compare-strings buf 669 670 tmp 669 670) t
      (setq result t))
  (if /= (compare-strings buf 671 672 tmp 671 672) t
      (setq result t))
  (if /= (compare-strings buf 673 674 tmp 673 674) t
      (setq result t))
  (if /= (compare-strings buf 675 676 tmp 675 676) t
      (setq result t))
  (goto-char (point-min))
 ) 
