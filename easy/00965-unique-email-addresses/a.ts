function numUniqueEmails(emails: string[]): number {
    const u = new Set();
    emails.map((email) => {
        let [local, domain] = email.split('@');
        local = local.split('+')[0].replace(/\./g, '');
        u.add(`${local}@${domain}`);
    })
    return u.size;
};
